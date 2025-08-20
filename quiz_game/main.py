import csv
import random
import time


#Lists to hold questions and answers
question = []
answer = []
#Global variables for user score
user_score = 0
breaking = False
best_score = None


#Load questions from CSV
def open_question(file_name):
    #Read questions and answers from a CSV file
    global question, answer
    question = []
    answer = []
    with open(file_name, 'r') as file:
        csv_reader = csv.DictReader(file)
        for row in csv_reader:
            question.append(row["question"])
            answer.append(row["answer"])


#Handle answering a question
def answer_question(count):
    # Ask the question, check the answer, and update score
    global user_score, breaking

    # randomize answer choices
    choices = ["A", "B", "C", "D"]
    random.shuffle(choices)

    print(question[count])
    print("Enter your answer (A, B, C, D). Press Q to quit:")

    start_time = time.time()
    user_input = input().upper()
    elapsed = time.time() - start_time  # Time taken

    if user_input == "Q":
        print("Saving score...")
        saving_score()
        breaking = True
        return

    correct_answer = answer[count].upper()
    if user_input == correct_answer:
        # Time based score, faster answer = more points
        points = max(100 - int(elapsed*5), 30)  # minimum 30 points
        user_score += points
        print(f"You are right! +{points} points. Total score: {user_score}")
    else:
        print(f"You are wrong! The right answer is: {correct_answer}")


# save score to CSV
def saving_score():
    #append the user's score to a CSV file
    global user_score
    with open("quiz_game/score.csv", "a") as f:
        f.write(f"{user_score}\n")
    print("Score saved!")

# Let user choose a CSV file
print("Choose a question file:")
print("1 - General Knowledge")
print("2 - Science")
file_choice = input("Enter 1 or 2: ")
file_name = "quiz_game/question.csv" if file_choice == "1" else "/workspaces/A_CP3/quiz_game/science.csv"
print(f"Loaded {len(question)} questions from {file_name}")


open_question(file_name)


while not breaking:
    count = random.randint(0, len(question)-1)
    answer_question(count)

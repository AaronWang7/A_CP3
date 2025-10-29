import tabulate
import time
money = 10392193021380218321
counts = 0

for i in str(money):
    counts = counts + 1
    print(counts)
    for i in range(1, 4):
        print("loading", "." * i)
        time.sleep(0.1)
    time.sleep(0.1)
    if counts <= 4:
        print("thousands")
    elif counts <= 5:
        print("ten thousands")

    elif counts <= 7:
        print("Millions")

    elif counts <= 10:
        print("billions")

    elif counts <= 15:
        print("Under trillions")

    elif counts >= 15:
        print("Over trillions")

buy = int(input("Ho wmuch u want to spend?:"))

counts = 0
for i in str(buy):
    counts = counts + 1
    print(counts)
    for i in range(1, 4):
        print("loading", "." * i)
        time.sleep(1)
    time.sleep(0.5)
    if counts <= 4:
        print("thousands")
    elif counts <= 5:
        print("ten thousands")

    elif counts <= 7:
        print("Millions")

    elif counts <= 10:
        print("billions")

    elif counts <= 15:
        print("Under trillions")

    elif counts >= 15:
        print("Over trillions")

money = money - buy
print("\nNew")

data = [["Bruce Wayne", "Batman", money], ["Oliver queen", "Green arrow", money], ["Someone", "some job", money]
        ]
print(tabulate.tabulate(data, headers=["Name", "job", "Total money"]))

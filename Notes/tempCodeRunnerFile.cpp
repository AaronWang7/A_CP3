int main() {
    int first = getNumber("Enter your first number:\n");
    int second = getNumber("Enter your second number:\n");
    cout << "You entered " << first << " and " << second << endl;

    // Write to a text file
    ofstream file;
    file.open("data.txt");
    if (file.is_open()) {
        file << setw(20) << "Hello" << setw(20) << "World\n";
        file.close();
    }

    // Write to a CSV file
    file.open("data.csv");
    if (file.is_open()) {
        file << "hi\n";
        file << "1,The Matrix,1999\n";
        file << "2,Inception,2010\n";
        file.close();
    }

    return 0;
}
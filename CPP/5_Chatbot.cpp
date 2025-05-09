#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

void studentHelperBot() {
    cout << "Hello! I'm your Student Helper Chatbot 🤖\n";
    cout << "Ask me anything about college. Type 'bye' to exit.\n";

    string userInput;
    
    while (true) {
        cout << "You: ";
        getline(cin, userInput);
        string inputLower = toLower(userInput);

        if (inputLower.find("library") != string::npos) {
            cout << "📚 The library is open from 9 AM to 6 PM on weekdays.\n";
        } else if (inputLower.find("hod") != string::npos || inputLower.find("head of department") != string::npos) {
            cout << "👨‍🏫 The HOD of Computer Engineering is Dr. A.B. Patil.\n";
        } else if (inputLower.find("exam") != string::npos || inputLower.find("timetable") != string::npos) {
            cout << "📝 The next exam is on 15th May. Check the notice board for the timetable.\n";
        } else if (inputLower.find("holiday") != string::npos) {
            cout << "🎉 The next holiday is on 1st May (Maharashtra Day).\n";
        } else if (inputLower.find("lab") != string::npos) {
            cout << "💻 Labs are open from 10 AM to 5 PM. Contact your teacher for access.\n";
        } else if (inputLower.find("canteen") != string::npos) {
            cout << "🍽️ The canteen is open from 8 AM to 4 PM. Try the samosas!\n";
        } else if (inputLower.find("bye") != string::npos) {
            cout << "Goodbye! Study well! 📖\n";
            break;
        } else {
            cout << "🤔 Sorry, I didn't understand that. Ask me something about the college!\n";
        }
    }
}

int main() {
    studentHelperBot();
    return 0;
}

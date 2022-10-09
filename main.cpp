// for the DA Hackathon
// Education program
// Survey



#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

void intro();
void survey();
string converter(int, int, int, int);
void review();
char inputValidation(char);

void intro()
{
    int numOfStudying;
    string topic;

    cout << "Hi!" << endl
        << "Welcome to the Better World.\n" << endl
        << "In this simple survey program, we will...\n"
        << "1. Help finding your learning style\n"
        << "2. Redirect you to resources regarding the topics you're studying.\n" << endl;
    cout << "\nReady? Here we go!\n" << endl;

    cout << "What is your level of education?" << endl
        << "Please enter the number of years you've been studying. "
        << "(Round it up to integers!) : ";
    cin >> numOfStudying;
     
    while (cin.fail()) {

        cout << "This is not a number, please only enter a number" << endl;
        cin.clear();
        cin.ignore();
        cin >> numOfStudying;
    }

    if (numOfStudying <= 6)
    {
        cout << "\nNice! It seems that you are currently on elementary course." << endl;
        cout << "Tell us the topic you'd like to study on today!" << endl;
        cin.ignore();
        getline(cin, topic);

        cout << "Bringing up some examples on " << topic << "..." << endl;
        /* We're supposed be a website so we'd be showing a single example
         to see how the user is approaching this novel concept.*/
    }
    else if (numOfStudying <= 12)
    {
        cout << "\nNice! It seems that you are currently on secondary level course." << endl;
        cout << "Tell us the topic you'd like to study on today!" << endl;
        cin.ignore();
        getline(cin, topic);

        cout << "\nBringing up some examples on " << topic << "..." << endl;
        /* We're supposed be a website so we'd be showing a single example
         to see how the user is approaching this novel concept.*/
    }
    else if (numOfStudying <= 16)
    {
        cout << "\nNice! It seems that you are currently on college/university level course." << endl;
        cout << "Tell us the topic you'd like to study on today!" << endl;
        cin.ignore();
        getline(cin, topic);

        cout << "\nBringing up some examples on " << topic << "..." << endl;
        /* We're supposed be a website so we'd be showing a single example
         to see how the user is approaching this novel concept.*/
    }
    else
    {
        cout << "\nNice! It seems that you are currently on Masters/PhD level course." << endl;
        cout << "Tell us the topic you'd like to study on today!" << endl;
        cin.ignore();
        getline(cin, topic);

        cout << "\nBringing up some examples on " << topic << "...\n" << endl;
        /* We're supposed be a website so we'd be showing a single example
         to see how the user is approaching this novel concept.*/
    }

} // intro function closed

void survey()
{
    char answer = 0;
    int visual = 0;
    int auditorial = 0;
    int kinaesthetic = 0;
    int readNwrite = 0;

    //Question 1
    cout << "\nQ1: How would you approach this concept/problem?" << endl;
    cout << "  a. ask why this concept/problem is made" << endl;
    cout << "  b. look for a diagram" << endl;
    cout << "  c. look for a simplified video with an animation" << endl;
    cout << "  d. listen to the lecture again as an audio file" << endl;
    cout << "  answer: ";
    cin >> answer;
    inputValidation(answer);
 

    switch (answer)
    {
    case 'a':
        readNwrite += 1;
        break;
    case 'b':
        visual += 1;
        break;
    case 'c':
        kinaesthetic += 1;
        break;
    case 'd':
        auditorial += 1;
        break;
    default:
        break;
    }

    //Question 2
    cout << "\nQ2: What kind of book do you like to read?" << endl;
    cout << "  a. I like books without pictures" << endl; // READnWRITE
    cout << "  b. I like books with pictures" << endl; // VISUAL
    cout << "  c. I prefer play with toys that explains the material" << endl; // KINEASTHETIC
    cout << "  d. I like audio books" << endl; // AUDITORIAL
    cout << "  answer: ";
    cin >> answer;
    inputValidation(answer);

    switch (answer)
    {
    case 'a':
        readNwrite += 1;
        break;
    case 'b':
        visual += 1;
        break;
    case 'c':
        kinaesthetic += 1;
        break;
    case 'd':
        auditorial += 1;
        break;
    default:
        break;
    }

    //Question 3
    cout << "\nQ3: How do you study at home?" << endl;
    cout << "  a. I like to make note cards" << endl; // READnWRITE
    cout << "  b. I picture what I'm reading in my head" << endl; // VISUAL
    cout << "  c. I like to jiggle things around while studying" << endl; // KINEASTHETIC
    cout << "  d. I like to listen to music while I'm studying" << endl; // AUDITORIAL
    cout << "  answer: ";
    cin >> answer;
    inputValidation(answer);

    switch (answer)
    {
    case 'a':
        readNwrite += 1;
        break;
    case 'b':
        visual += 1;
        break;
    case 'c':
        kinaesthetic += 1;
        break;
    case 'd':
        auditorial += 1;
        break;
    default:
        break;
    }

    //Question 4
    cout << "\nQ4: What do you do when you see the word, \"elephants\"?" << endl;
    cout << "  a. I'm curious. I feel like getting a book and learn more about elephants." << endl; // READnWRITE
    cout << "  b. I picture an elephant in my head" << endl; // VISUAL
    cout << "  c. I feel like touching an elephant" << endl; // KINEASTHETIC
    cout << "  d. I imagine the sound of an elephant" << endl; // AUDITORIAL
    cout << "  answer: ";
    cin >> answer;
    inputValidation(answer);

    switch (answer)
    {
    case 'a':
        readNwrite += 1;
        break;
    case 'b':
        visual += 1;
        break;
    case 'c':
        kinaesthetic += 1;
        break;
    case 'd':
        auditorial += 1;
        break;
    default:
        break;
    }

    //Question 5
    cout << "\nQ5: How would you like to learn about a sport if you had the opportunity?" << endl;
    cout << "  a. By reading a book that teaches you techniques to be a better player." << endl; // READnWRITE
    cout << "  b. By watching it live or on TV" << endl; // VISUAL
    cout << "  c. By practicing on the field" << endl; // KINEASTHETIC
    cout << "  d. By listening to a podcast about this sport" << endl; // AUDITORIAL
    cout << "  answer: ";
    cin >> answer;
    inputValidation(answer);

    switch (answer)
    {
    case 'a':
        readNwrite += 1;
        break;
    case 'b':
        visual += 1;
        break;
    case 'c':
        kinaesthetic += 1;
        break;
    case 'd':
        auditorial += 1;
        break;
    default:
        break;
    }

    //Question 6
    cout << "\nQ6: How would you like to learn about how a machine or game works?" << endl;
    cout << "  a. By reading about it or listening to someone talking about it" << endl; // READnWRITE
    cout << "  b. By looking at someone making it work in front of you" << endl; // VISUAL
    cout << "  c. By playing around with the materials" << endl; // KINEASTHETIC
    cout << "  d. By listening to a tutorial" << endl; // AUDITORIAL
    cout << "  answer: ";
    cin >> answer;
    inputValidation(answer);

    switch (answer)
    {
    case 'a':
        readNwrite += 1;
        break;
    case 'b':
        visual += 1;
        break;
    case 'c':
        kinaesthetic += 1;
        break;
    case 'd':
        auditorial += 1;
        break;
    default:
        break;
    }

    //Question 7
    cout << "\nQ7: If you went to a party with some friedns, what are you most likely to do the next day?" << endl;
    cout << "  a. Write a journal about it" << endl; // READnWRITE
    cout << "  b. Think of faces of pepole you met" << endl; // VISUAL
    cout << "  c. Think about the dance move you did and the food you ate" << endl; // KINEASTHETIC
    cout << "  d. Think about the music that was played" << endl; // AUDITORIAL
    cout << "  answer: ";
    cin >> answer;
    inputValidation(answer);

    switch (answer)
    {
    case 'a':
        readNwrite += 1;
        break;
    case 'b':
        visual += 1;
        break;
    case 'c':
        kinaesthetic += 1;
        break;
    case 'd':
        auditorial += 1;
        break;
    default:
        break;
    }


    //Question 8
    cout << "\nQ8: I prefer a teacher who..." << endl;
    cout << "  a. assigns books to read" << endl; // READnWRITE
    cout << "  b. shows graphs or other pictures while explaining" << endl; // VISUAL
    cout << "  c. goes to the lab and makes us practice the experiment" << endl; // KINEASTHETIC
    cout << "  d. makes group discussion and invite speaker" << endl; // AUDITORIAL
    cout << "  answer: ";
    cin >> answer;
    inputValidation(answer);

    switch (answer)
    {
    case 'a':
        readNwrite += 1;
        break;
    case 'b':
        visual += 1;
        break;
    case 'c':
        kinaesthetic += 1;
        break;
    case 'd':
        auditorial += 1;
        break;
    default:
        break;
    }

    //Question 9
    cout << "\nQ9: How would you want to know about an apartment that you wish to buy?" << endl;
    cout << "  a. A printing description of the rooms with all the features" << endl; // READnWRITE
    cout << "  b. Watch a video of the property" << endl; // VISUAL
    cout << "  c. Visiting the apartment so you can touch and feel everything in reality" << endl; // KINEASTHETIC
    cout << "  d. Have a discussion with the owner" << endl; // AUDITORIAL
    cout << "  answer: ";
    cin >> answer;
    inputValidation(answer);

    switch (answer)
    {
    case 'a':
        readNwrite += 1;
        break;
    case 'b':
        visual += 1;
        break;
    case 'c':
        kinaesthetic += 1;
        break;
    case 'd':
        auditorial += 1;
        break;
    default:
        break;
    }

    //Question 10
    cout << "\nQ10: You come to the hackathons at De Anza college to participate in one of the workshops. In what ways will you easily learn about coding?" << endl;
    cout << "  a. By reading about how to make a code in specific language" << endl; // READnWRITE
    cout << "  b. By watching someone coding in front of you" << endl; // VISUAL
    cout << "  c. By typing the code on your computer" << endl; // KINEASTHETIC
    cout << "  d. By speaking with somebody that will help you while you code." << endl; // AUDITORIAL
    cout << "  answer: ";
    cin >> answer;


    switch (answer)
    {
    case 'a':
        readNwrite += 1;
        break;
    case 'b':
        visual += 1;
        break;
    case 'c':
        kinaesthetic += 1;
        break;
    case 'd':
        auditorial += 1;
        break;
    default:
        break;
    }

    //RESULT
    cout << "\nCongratulations! We are glad to tell you that you are mostly a "
        << converter(visual, auditorial, kinaesthetic, readNwrite) << endl << endl;
}


string converter(int vis, int audi, int kineas, int readNwrite)
{
    string character = "PSYCHO!";

    if (vis >= audi && vis >= kineas && vis >= readNwrite)
    {
        character = "VISUAL LEARNER";
    }
    else if (audi >= vis && audi >= kineas && audi >= readNwrite)
    {
        character = "AUDITORIAL LEARNER";
    }
    else if (kineas >= vis && kineas >= audi && kineas >= readNwrite)
    {
        character = "KINAESTHETIC LEARNER";
    }
    else if (readNwrite >= vis && readNwrite >= audi && readNwrite >= kineas)
    {
        character = "READING AND WRITING TYPE OF LEARNER";
    }


    return character;
}

void review()
{
    int review = 0;
    string doBetter;
    string send;
    cout << "\nThanks for using our survey!\n"
        << "How would you rate us on a scale of 10?" << endl;
    cin >> review;
    if (review < 3)
    {
        cout << "Oh, I'm sorry to hear that.\n"
            << "are there any ways for us to do a better job?" << endl;
        cin.ignore();
        getline(cin, doBetter);
        cout << "Okay, is this what you want to tell us?\n"
            << "\"" << doBetter << "\"" << endl
            << "Please enter \"Send\" to send us this message." << endl;
        cin.ignore();
        getline(cin, send);
        if (send == "send" || "Send")
        {
            cout << "Your message has been successfully submitted!" << endl;
            cout << "Thank you for your feedback!" << endl;
        }
    }
    else if (review < 7)
    {
        cout << "Oh, did we miss anything?\n"
            << "Are there any ways for us to do a better job?" << endl;
        cin.ignore();
        getline(cin, doBetter);
        cout << "Okay, is this what you want to tell us?\n"
            << "\"" << doBetter << "\"" << endl
            << "Please enter \"Send\" to send us this message." << endl;
        cin.ignore();
        getline(cin, send);
        if (send == "send" || "Send")
        {
            cout << "Your message has been successfully submitted!" << endl;
            cout << "Thank you for your feedback!" << endl;
        }
    }
    else
    {
        cout << "\nPerfect!\n"
            << "I'm glad you liked this :D \n"
            << "See you again soon!\n" << endl;
    }
}

char inputValidation(char answer) {

    while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd') {
        
        cout << "Please, you need to choose between a, b, c or d" << endl;
        cin >> answer;
    }

    return answer;
}

int main()
{
    intro();
    survey();
    review();

    return 0;
}

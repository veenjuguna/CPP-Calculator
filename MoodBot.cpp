#include <iostream>
#include <string>
using namespace std;

void showMoodBot(const string& mood) {
    string message;

    if (mood == "happy") {
        message = "It's wonderful to hear that you're feeling happy today. "
                  "Happiness is a powerful emotion that can brighten not only your day but also the days of those around you. "
                  "Remember to cherish these moments and spread your positive energy wherever you go. "
                  "Keep nurturing this joyful spirit and let it inspire you to achieve great things.";
    } 
    else if (mood == "sad") {
        message = "It's perfectly natural to feel sad sometimes; it's part of being human. "
                  "During these moments, it's important to be gentle with yourself and allow space for your feelings. "
                  "Remember that sadness often signals a chance for growth and reflection. "
                  "Take care of yourself and trust that brighter days are ahead.";
    }
    else if (mood == "angry") {
        message = "Feeling angry can be overwhelming, but it's a valid emotion that deserves attention. "
                  "Try to take a deep breath and channel your anger into positive actions or understanding. "
                  "Remember that anger often points to something you care deeply about. "
                  "Use this energy constructively and allow yourself moments to calm and reflect.";
    }
    else if (mood == "meh") {
        message = "Sometimes feeling ‘meh’ or indifferent can happen and that's okay. "
                  "It can be a sign that you need a break or some time to recharge your mind and body. "
                  "Allow yourself to rest without judgment and remember that not every day needs to be extraordinary. "
                  "Taking things slow can prepare you for new energy and inspiration soon.";
    }
    else if (mood == "excited") {
        message = "Excitement is such an invigorating feeling that fills you with anticipation and energy. "
                  "Embrace this enthusiasm and let it motivate you to pursue your goals with passion. "
                  "Remember to savor every moment of this excitement as it fuels creativity and joy. "
                  "Channel this positive energy into actions that bring you closer to your dreams.";
    }
    else if (mood == "tired") {
        message = "Feeling tired is your body's way of asking for rest and renewal. "
                  "It's important to listen to these signals and give yourself permission to slow down. "
                  "Rest allows your mind and body to recover so you can come back stronger and more focused. "
                  "Take time to nurture yourself with good sleep and relaxation.";
    }
    else if (mood == "confused") {
        message = "Confusion often means you are facing something new or challenging, which is a natural part of learning. "
                  "Allow yourself patience as you navigate through uncertainty and seek clarity step by step. "
                  "Remember that every question you have is a doorway to greater understanding and growth. "
                  "Trust yourself to find the answers and move forward with confidence.";
    }
    else {
        message = "I’m not sure I understand that feeling, but I hope you are doing well. "
                  "Sometimes emotions can be complex and hard to describe, and that’s okay. "
                  "Remember to be kind to yourself and take things one step at a time. "
                  "If you ever want to talk more, I’m here to listen.";
    }

    cout << "\n[MoodBot]\n" << message << "\n\n";
}

int main() {
    string mood;

    cout << "Hello!\n";
    cout << "How are you feeling today? (happy / sad / angry / meh / excited / tired / confused): ";
    cin >> mood;

    showMoodBot(mood);

    cout << "Thank you for chatting with MoodBot. Have a great day!\n";

    return 0;
}

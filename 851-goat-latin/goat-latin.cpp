class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch >= 'A' && ch <='Z') ch = char(ch + 32);

        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string goatLatinEachWord(string word, int wordNumber)
    {
        //checking first character and if it is consonant, add first letter to end
        char ch = word[0];

        if(!isVowel(ch)) {
            word = word.substr(1, word.length());
            word = word + ch;
        }
        
        word.append("ma");

        string aword = "";
        for(int i = 0; i < wordNumber; i++)
        {
            aword.append("a");
        }
        word.append(aword);

        return word;
    }
    
    string toGoatLatin(string sentence) 
    {
        int p = 0; // to keep track of each space
        int wordNumber = 1;
        int len = sentence.length();

        string newStr = "";
        string word = "";
        sentence = sentence + " ";

        for(int i = 0; i <= len; i++)
        {
            if(sentence[i] == ' ')
            {
                word = sentence.substr(p, i-p);
                cout<<i<<" "<<word<<endl;
                p = i + 1;
                newStr = newStr + goatLatinEachWord(word, wordNumber) + " ";
                wordNumber++;
            }
        }

        return newStr.substr(0, newStr.length() - 1);
    }
};
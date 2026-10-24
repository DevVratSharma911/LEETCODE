class Solution {
public:
    int countDaysTogether(string Aalice, string Lalice, string Abob,
                          string Lbob) {

        int AliceAM = (Aalice[0] - '0') * 10 + Aalice[1] - '0';
        int AliceEM = (Lalice[0] - '0') * 10 + Lalice[1] - '0';
        int BobAM = (Abob[0] - '0') * 10 + Abob[1] - '0';
        int BobEM = (Lbob[0] - '0') * 10 + Lbob[1] - '0';
        vector<int> months{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int AliceSP = 0;
        int AliceEP = 0;
        int BobSP = 0;
        int BobEP = 0;
        int together = 0;
        for (int i = 0; i < 12; i++) {
            if (i < AliceAM - 1)
                AliceSP += months[i];
            if (i < AliceEM - 1)
                AliceEP += months[i];
            if (i < BobAM - 1)
                BobSP += months[i];
            if (i < BobEM - 1)
                BobEP += months[i];
        }
        AliceSP += (Aalice[3] - '0') * 10 + Aalice[4] - '0';
        AliceEP += (Lalice[3] - '0') * 10 + Lalice[4] - '0';
        BobSP += (Abob[3] - '0') * 10 + Abob[4] - '0';
        BobEP += (Lbob[3] - '0') * 10 + Lbob[4] - '0';
        for (int i = 1; i <= 365; i++) {
            if ((i >= AliceSP && i <= AliceEP) && (i >= BobSP && i <= BobEP)) {
                together++;
            }
        }
        return together;
    }
};

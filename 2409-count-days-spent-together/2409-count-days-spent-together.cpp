class Solution {
public:
    int findDayOfYear(string date, vector<int>& monthDay){
        int month = stoi(date.substr(0, 2));
        int days = stoi(date.substr(3));

        return monthDay[month - 1] + days;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> monthDays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        vector<int> currMonthDays(13, 0);
        currMonthDays[1] = 31;

        for(int i =2; i <= 12; i++){
            currMonthDays[i] = currMonthDays[i-1] + monthDays[i-1];
        }

        int arriveAliceDay = findDayOfYear(arriveAlice, currMonthDays);
        int leaveAliceDay =  findDayOfYear(leaveAlice, currMonthDays);
        int arriveBobDay = findDayOfYear(arriveBob, currMonthDays);
        int leaveBobDay = findDayOfYear(leaveBob, currMonthDays);

        int overlapping = min(leaveAliceDay, leaveBobDay) - max(arriveAliceDay, arriveBobDay) + 1;

        return overlapping < 0 ? 0 : overlapping;
    }
};
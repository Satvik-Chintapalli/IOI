#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h,m,s,t1,t2;
    float positionOfHourHand,positionOfMinutesHand,positionOfSecondsHand;
    int startPosition,endPosition;
    bool forwardPossibility = true;
    bool backwardPossibility = true;

    cin >> h >> m >> s >> t1 >> t2;

    positionOfHourHand = h%12 + (float) m/60; // 12
    positionOfMinutesHand = (m/5); //0
    positionOfSecondsHand = s/5; // 1

    startPosition = t1%12; // 12
    endPosition = t2%12; // 1
    
    cout << positionOfHourHand << " " << positionOfMinutesHand << " " << positionOfSecondsHand << "\n";

    int forwardPosition=startPosition;
    int backwardPosition=startPosition;
    while(forwardPosition!=endPosition || backwardPosition!=endPosition){

        cout << "Forward Position " << forwardPosition << "\n";
        cout << "Backward Position " << backwardPosition << "\n";
        int nextPosition = (startPosition+1)%12;
        int previousPosition = (backwardPosition-1)%12;
         if(startPosition<=positionOfHourHand<=nextPosition || startPosition<=positionOfMinutesHand<=nextPosition || startPosition<=positionOfSecondsHand<=nextPosition){

            // cout << "At breaking point, values are " << forwardPosition << " " << backwardPosition << " ";
            forwardPossibility = false;
            break;
        }if(previousPosition<=positionOfHourHand<=backwardPosition || previousPosition<=positionOfMinutesHand<=backwardPosition || previousPosition<=positionOfSecondsHand<=backwardPosition){

            // cout << "At breaking point, values are " << forwardPosition << " " << backwardPosition << " ";
            backwardPossibility = false;
            break;
        }


        forwardPosition = nextPosition;
        backwardPosition = previousPosition;
    }

    if(forwardPossibility || backwardPossibility){cout<<"YES";}else{cout<<"NO";};
    return 0;
}

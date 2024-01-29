// CCC '14 S1

#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, m; cin >> k >> m;
  vector<int> invitees(k + 1);
  for (int i = 1; i < k + 1; i++) {
    invitees[i] = i;
  }
  vector<int> rounds(m);
  for (int i = 0; i < m; i++) {
    cin >> rounds[i];
  }

  for (int i = 0; i < m; i++) {
    int positionMultiple = rounds[i];
    vector<int> newInvitees = invitees; 
    for (int j = 1; j < invitees.size(); j++) {
      if (j % positionMultiple == 0) {
        newInvitees[j] = -1;
      }
    }
    invitees.clear();
    invitees.push_back(-1);
    for (int j = 1; j < newInvitees.size(); j++) {
      if (newInvitees[j] != -1) { 
        invitees.push_back(newInvitees[j]);
      }
    }
  }
  for (int i = 1; i < invitees.size(); i++)  {
    cout << invitees[i] << "\n";
  }
}
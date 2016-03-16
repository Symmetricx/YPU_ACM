#include<iostream>
#include<queue>
#include<math.h>
using namespace std;

int firstNumber;
int secondNumber;
//void dfs(int size, int start, int lvl)
//{
//	//cout << start << " ";
//	checked[start] = true;
//	if (lvl > dude)
//	{
//		dude = lvl;
//	}
//	for (int i = 1; i <= size; i++)
//	{
//		if (arr[start][i] && !checked[i])
//		{
//
//			dfs(size, i, lvl + 1);
//		}
//	}
//	return;
//}
int bfs()
{
	queue<int> q;
	queue<int> lvl;
	q.push(firstNumber);
	int holder, lvlHolder;
	lvl.push(0);
	while (!q.empty())
	{
		holder = q.front();
		lvlHolder = lvl.front();
		q.pop();
		lvl.pop();
		//cout << holder << endl;
		if (holder == secondNumber)
			break;
		if (holder <= secondNumber)
		{
			q.push(holder * 2);
			lvl.push(lvlHolder + 1);	
		}
		if (holder - 1 > 0)
		{
			q.push(holder - 1);	
			lvl.push(lvlHolder + 1);
		}
	}
	return lvlHolder;
}
int main()
{

	cin >> firstNumber >> secondNumber;
	if (firstNumber > secondNumber)
		cout << firstNumber - secondNumber;
	else
		cout << bfs();

}
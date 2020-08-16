/*Alive!
You have drunk with your friends.Now,you want to go home
but no one wants to back with you so you are solo now.
But!,the cop had set up the checkpoint in your way
So,you want to know that your blood-alcohol are under the limit or not.
if over :output is "You lose!"
if under:output is "You are alive!"
demonstate liqueur brand is pink swan*/
#include<stdio.h>
int main() {
	int age, n, t;
	float BA;
	printf("Enter your age : ");
	scanf_s("%d", &age);
	printf("Enter your shots : ");
	scanf_s("%d", &n);
	printf("Enter your time(since you go out of party until meeting the cops and about in hour.): ");
	scanf_s("%d", &t);
	BA = (n * 29.5) - (t * 20);
	printf("Your blood-alcoho is %.2f mg%% ", BA);
	if (age <= 20) {
		if (BA > 20) printf("You lose!");
		else printf("You are alive!");
	}
	if (age > 20) {
		if (BA > 50) printf("You lose!");
		else printf("You are alive!");
	}
	return 0;
}
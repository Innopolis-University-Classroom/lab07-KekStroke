
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
void multiples (int& sum, int x, int n)
{
    sum += 1;
    for (int i = 1; i <= n; i++) {
        sum += x*n;
    }
}
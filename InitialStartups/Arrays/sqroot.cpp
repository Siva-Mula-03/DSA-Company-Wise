bool isPerfectSquare(int x)
{
    long long left = 1, right = x;
 
    while (left <= right) {
        long long mid = (left + right) / 2;
 
        // Check if mid is perfect square
        if (mid * mid == x) {
            return true;
        }
 
        // Mid is small -> go right to increase mid
        if (mid * mid < x) {
            left = mid + 1;
        }
 
        // Mid is large -> to left to decrease mid
        else {
            right = mid - 1;
        }
    }
    return false;
}

int floorSqrt(int n)
{
    // Write your code here.
    if(isPerfectSquare(n))
    {
        return (sqrt(n));
    }
    return floor(sqrt(n));
}

int solution(int N) {
    int maxGap = 0;
    int currentGap = -1;
    while (N > 0) {
        if (N % 2) {
            if (currentGap > maxGap)
                maxGap = currentGap;
            
            currentGap = 0;
        }
        else if (currentGap >= 0) {
            currentGap++;
        }
        
        N = N >> 1;        
    }
    
    return maxGap;
}
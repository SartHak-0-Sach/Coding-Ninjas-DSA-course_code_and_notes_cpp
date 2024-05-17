// void minLengthWord(char input[], char output[]){
		
// 	int count = 0;
// 	int minLen = 1e7;
// 	int index = 0;

// 	int size = 0;
	
// 	for(int i = 0; input[i]!='\0'; i++)
// 	{
// 		size++;
// 	}

// 	for(int i = 0; i<=size; i++)
// 	{
// 		if(input[i]==' ' || input[i]=='\0')
// 		{
// 			if(minLen>count)
// 			index = i-1;

// 			minLen = std::min(minLen, count);
// 			count=0;
// 		}
// 		else
// 		count++;
// 	}

// 	while(minLen>0)
// 	{
// 		output[minLen] = input[index];
// 		minLen--;
// 		index--;
// 	}
// }

#include <climits>
#include <cstring>
void minLengthWord(char input[], char output[]) {
  int minStart = -1;
  int minLength = INT_MAX;
  int currentStart = 0;
  int i = 0;
  int len = strlen(input);
  for (; i < len; i++) {
    if (input[i] == ' ') {
      int currentWordLength = i - currentStart;
      if (currentWordLength < minLength) {
        minStart = currentStart;
        minLength = currentWordLength;
      }
      currentStart = i + 1;
    }
  }
  if (minStart == -1) {
    for (int i = 0; i <= len; i++) {
      output[i] = input[i];
    }
  } else {
    int currentWordLength = i - currentStart;
    if (currentWordLength < minLength) {
      minStart = currentStart;
      minLength = currentWordLength;
    }
    int j = 0;
    for (int i = minStart; i < minStart + minLength; i++) {
      output[j++] = input[i];
    }
    output[j] = '\0';
  }
}
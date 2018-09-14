void setup() {
}

void loop() {
  int arr[] = {1,1,1,0,1,1};
  int angles[] = {0,45,90,135,180,270};
  int weights[] = {1,1,1,1,1,1};

  int sum = 0;
  int count = 0;

  for (int i = 0; i < 6; i++){
    if (arr[i] == 1){
      sum += angles[i];
      count += 1;
    }  
  }
  
  if (count == 6){
    printf ("DONT MOVE");
  }
  
  else{
    sum /= count;
    int direction = 360-sum;
    printf("MOVE IN ANGLE: %d", direction);
    printf("MOVE IN DIRECTION X: %f  AND DIRECTION Y: %f", cos(direction), sin(direction));
  }
}

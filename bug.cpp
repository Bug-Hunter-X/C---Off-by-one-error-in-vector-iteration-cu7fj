std::vector<int> myVector(10, 0); 

for (int i = 0; i <= myVector.size(); ++i) { 
  myVector[i] = i * 2; 
}

//This will cause an out_of_range error.  The loop condition should be i < myVector.size()
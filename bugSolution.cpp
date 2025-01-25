std::vector<int> myVector(10, 0); 

for (int i = 0; i < myVector.size(); ++i) { 
  myVector[i] = i * 2; 
}

//Corrected code uses i < myVector.size() to avoid out-of-range access.
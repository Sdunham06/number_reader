// custom_math.c

// will take too matrix and return one matrix
int dot_product(double A[][], int rows_a, int rows_a, double B[][], int rows_b, cols_b){

	double new_matrix[rows_a][cols_b];

	
	// loop row then col of A
	for(int i = 0; i < rows_a: i++){
		for(int z = 0; z < cols_b: z++){

			double temp_sum = 0;
		
			for(int k = 0; k < cols_a; k++){

				temp_sum += A[i][k]*B[k][z];
			}
			
			new_matrix[i][z] = temp_sum;

		}
	
	}

	return 0;
}

// if a value is greater than 0 return that number
// if that number is less than 0 return 0 
int ReLU(){
	return 0;
}

// exp(z)/sum(e(z))
int soft_max(){
	return 0;
}

// takes in a vector and returns a vector of the
// size of zeros and a 1 in the postion with the 
// Greatest value 
int one_hot(){
	return 0;
}

// returns the sum of an vector
int sum(){
	return 0;
}

// Z > 0
int d_Relu(){
	return 0;
}


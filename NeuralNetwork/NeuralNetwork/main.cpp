#include "model.h"
#include "tensor.h"

int main(int argc, char* argv[]) {


	//tensor::test_basic<double>();
	tensor::test_conv<double>();
	//tensor::test_pooling<double>();

	//model::test<double>();
	getchar();

	return 0;
}
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class NeuralNetwork {
private:
    vector<vector<double>> weights;
    double sigmoid(double x) {
        return 1 / (1 + exp(-x));
    }
public:
    NeuralNetwork(int inputSize, int outputSize) {
        weights.resize(inputSize,vector <double>(outputSize, 0.5));
    }
    vector<double> forward(const vector<double>& inputs) {
        vector<double> outputs(weights[0].size(), 0.0);
        for (size_t i = 0; i < weights.size(); ++i) {
            for (size_t j = 0; j < weights[i].size(); ++j) {
                outputs[j] += inputs[i] * weights[i][j];
            }
        }
        for (double& output : outputs) {
            output = sigmoid(output);
        }
        return outputs;
    }
};

int main() {
    NeuralNetwork nn(3, 2); // 3 inputs, 2 outputs
    vector<double> inputs = {1.0, 0.5, -1.5};
    vector<double> outputs = nn.forward(inputs);

    cout << "Outputs: ";
    for (double output : outputs) {
        cout << output << " ";
    }
    return 0;
}

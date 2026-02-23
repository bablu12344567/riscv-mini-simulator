#include <bits/stdc++.h>
using namespace std;

vector<int> regFile(32, 0);
vector<int> memory(1024, 0);

void execute(string line) {
    stringstream ss(line);
    string op;
    ss >> op;

    if(op == "ADD") {
        int rd, rs1, rs2;
        ss >> rd >> rs1 >> rs2;
        regFile[rd] = regFile[rs1] + regFile[rs2];
    }
    else if(op == "SUB") {
        int rd, rs1, rs2;
        ss >> rd >> rs1 >> rs2;
        regFile[rd] = regFile[rs1] - regFile[rs2];
    }
    else if(op == "ADDI") {
        int rd, rs1, imm;
        ss >> rd >> rs1 >> imm;
        regFile[rd] = regFile[rs1] + imm;
    }
    else if(op == "LW") {
        int rd, addr;
        ss >> rd >> addr;
        regFile[rd] = memory[addr];
    }
    else if(op == "SW") {
        int rs, addr;
        ss >> rs >> addr;
        memory[addr] = regFile[rs];
    }
}

int main() {
    ifstream file("instructions.txt");
    string line;

    while(getline(file, line)) {
        execute(line);
    }

    cout << "Register State:\n";
    for(int i = 0; i < 8; i++)
        cout << "x" << i << ": " << regFile[i] << endl;
}
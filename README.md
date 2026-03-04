# Yidlang
A language that forces you to think before you act

## Compile
If you're using MSYS2 MinGW:

Go to the project root and run:
```
g++ -std=c++20 \
source/SourceDocument.cpp \
syntax/ASTBuilder.cpp \
legitimacy/StaticLegitimacy.cpp \
ledger/DecisionLedger.cpp \
traversal/AwarenessPass.cpp \
traversal/EvaluationPass.cpp \
traversal/ResolutionPass.cpp \
gate/ExecutionGate.cpp \
diagnostic/DiagnosticEngine.cpp \
driver/YidlangCLI.cpp \
driver/main.cpp \
-o yidlang.exe
```

If successful, it will appear:
yidlang.exe

### Run
From the same folder:
```
yidlang.exe program/first_thought.yidl
```
(because your .yidl file is in the program/ folder)

or

Run:
```
./yidlang.exe program/first_thought.yidl		
```
(or just yidlang.exe if in CMD)

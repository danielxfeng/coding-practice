# Coding Practice

This repository is for keeping hands-on coding skills sharp.

Recently I have been shifting toward a more modern software engineering workflow. My focus is on understanding the problem, making core engineering decisions around system design, data modeling, abstractions, complexity allocation, data structures, and learning how to effectively prompt agents to help with implementation.

At the same time, I still want to maintain the lower-level coding skills that can fade without regular practice: syntax fluency, boundary awareness, edge-case handling, and translating an idea into working code without AI assistance.

This repo exists for that practice. The solution implementations are written without AI assistance, while support files such as build configuration and this README may still be created or refined with AI.

The initial focus is LeetCode-style challenges in three language stacks:

- C++
- Go
- TypeScript

## Conventions

- C++ test files should end with `_test.cpp`.
- Go test files should end with `_test.go`.
- TypeScript test files should end with `.test.ts`.
- Build output goes into `build/` and is ignored by Git.
- Dependencies such as `node_modules/` and `.pnpm-store/` are ignored.

## Install

### C++

Required:

- CMake
- A C++20 compiler

On macOS, Apple Clang from Xcode Command Line Tools is enough:

```bash
xcode-select --install
```

Build all C++ tests:

```bash
./build.sh
```

Run all C++ tests:

```bash
ctest --test-dir build --output-on-failure
```

Optional VS Code per-test buttons:

- Install `C++ TestMate`
- Extension id: `matepek.vscode-catch2-test-adapter`
- Run `./build.sh`
- Open the VS Code Testing panel

### Go

Required:

- Go

Run all Go tests:

```bash
go test ./...
```

Optional VS Code per-test buttons:

- Install the Go extension
- Extension id: `golang.Go`
- Open a Go test file and use the run/debug links above specific tests

### TypeScript

Required:

- Node.js
- pnpm

Install dependencies:

```bash
pnpm install
```

Run TypeScript tests:

```bash
pnpm test
```

Optional VS Code per-test buttons:

- Install the Vitest extension
- Extension id: `vitest.explorer`
- Open the VS Code Testing panel or use the run/debug links for specific tests

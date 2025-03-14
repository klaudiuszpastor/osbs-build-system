
# OSBS Build System

OSBS Build System is a lightweight tool designed to quickly generate the structure of a new project based on customizable templates. The `osbs.sh` script automates the process of copying a template, renaming files, and replacing placeholder text (such as `PROJECTNAME`) with the actual project name provided by the user.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Template Structure](#template-structure)
- [Extending OSBS](#extending-osbs)
- [License](#license)
- [Contributing](#contributing)
- [Contact](#contact)

## Overview

OSBS Build System simplifies the initial setup of new projects by automating repetitive tasks. Instead of manually creating directories and files, you can use this system to generate a complete project structure from pre-defined templates. This tool is ideal for developers who frequently start projects in C (or C++) and want to ensure consistency and save time.

## Features

- **Automated Project Generation:** Creates a new project directory with files copied from a selected template.
- **Placeholder Replacement:** Automatically replaces `PROJECTNAME` (and potentially other placeholders) in file names and file contents with the user-specified project name.
- **Interactive Template Selection:** Provides an interactive menu to choose from various project templates.
- **Customizable Templates:** Easily extendable to include more placeholders (e.g., `AUTHOR`, `VERSION`, `DATE`) or different project types.
- **Simple and Portable:** Written in Bash, making it portable across Unix-like systems.

## Requirements

- Unix-like operating system (Linux, macOS, etc.)
- Bash (compatible with `/bin/bash`)
- Standard Unix utilities: `cp`, `sed`, `mv`, `rm`
- Templates stored in a directory (default is `/var/osbs-build-system/templates`)

## Installation

1. **Clone the Repository:**

   Clone the OSBS Build System repository from GitHub:
   ```bash
   git clone https://github.com/yourusername/osbs-build-system.git
   ```
   
2. **Make the Script Executable:**

   Navigate to the repository directory and run:
   ```bash
   chmod +x osbs.sh
   ```

3. **(Optional) Install System-Wide:**

   To run OSBS from anywhere, copy the script to a directory in your PATH (e.g., `/usr/local/bin`):
   ```bash
   sudo cp osbs.sh /usr/local/bin/osbs
   ```
   Now you can run the script by simply typing:
   ```bash
   osbs <project_name>
   ```

## Usage

To generate a new project, run the script with the desired project name as an argument:
```bash
./osbs.sh my_project
```
or if installed system-wide:
```bash
osbs my_project
```

The script performs the following steps:
- Checks if a project name is provided.
- Verifies that the template directory exists.
- Ensures that a project with the given name does not already exist.
- Presents an interactive menu to select a template.
- Copies the selected template into a new project directory.
- Replaces all occurrences of the placeholder `PROJECTNAME` in both file names and file contents with the specified project name.

## Template Structure

Templates are stored in the directory specified by the `tdir` variable in the script (default is `/$HOME/osbs-build-system/templates`). Each template should contain the placeholder `PROJECTNAME` in file names and file contents. Example templates included in this system:

- **default.c:** A basic C project with a Makefile, source file, and header file.
- **default.cpp:** A basic C++ project.
- **library_project.c:** A project template for creating static or dynamic libraries in C.
- **unit_test_project.c:** A project template that includes unit tests in C.

## Extending OSBS

OSBS Build System is designed to be easily extended:
- **Additional Placeholders:** You can add more placeholders (e.g., `AUTHOR`, `VERSION`, `DATE`) in the template files and modify the script to replace them.
- **New Template Types:** Create new template directories for different project types (such as GUI applications or server applications).
- **Git Integration:** Automatically initialize a Git repository in the new project directory by adding commands like:
  ```bash
  cd my_project
  git init
  echo "# my_project" > README.md
  git add .
  git commit -m "Initial commit"
  ```
- **Advanced Configuration:** Enhance the script with interactive prompts to ask for additional project parameters.


## Contributing

Contributions are welcome! If you have suggestions, improvements, or bug fixes, please open an issue or submit a pull request on GitHub.


*Happy coding!*


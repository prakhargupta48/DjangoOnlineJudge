# DjangoOnlineJudge
# Online Judge Project

This project is an online judge system that allows users to submit solutions to various coding problems, run them against predefined test cases, and receive immediate feedback.

## Features

- Submit solutions in multiple programming languages (e.g., C++, Python).
- Automatic compilation and execution of submitted code.
- Verification of output against expected results.
- Detailed feedback on submission results (Accepted, Wrong Answer, Compilation Error, Runtime Error).

## Table of Contents

- [Getting Started](#getting-started)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Example Problems](#example-problems)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

### Prerequisites

- Python 3.x
- Django
- g++ (for compiling C++ code)
- Any other required dependencies specified in `requirements.txt`

### Installation

1. **Clone the repository**:
    ```sh
    git clone https://github.com/yourusername/online-judge.git
    cd online-judge
    ```

2. **Create a virtual environment and activate it**:
    ```sh
    python3 -m venv venv
    source venv/bin/activate
    ```

3. **Install the dependencies**:
    ```sh
    pip install -r requirements.txt
    ```

4. **Run database migrations**:
    ```sh
    python manage.py migrate
    ```

5. **Create a superuser**:
    ```sh
    python manage.py createsuperuser
    ```

6. **Start the development server**:
    ```sh
    python manage.py runserver
    ```

7. **Access the application**:
    Open your web browser and go to `http://127.0.0.1:8000/`.

## Project Structure

- `auth/`: Contains user authentication and authorisation.
- `problems/`: Contains the problem models and admin configurations.
- `submit/`: Contains forms and views for code submission and result display.
- `static/`: Contains static files (CSS, JavaScript).
- `templates/`: Contains HTML templates for rendering views.
- `manage.py`: Django's command-line utility for administrative tasks.

## Usage

### Adding Problems

1. Log in to the Django admin interface at `http://127.0.0.1:8000/admin/`.
2. Add a new problem by providing the problem description, input format, output format, and example test cases.

### Submitting Solutions

1. Go to the problem submission page.
2. Select the problem you want to solve.
3. Enter your code in the provided editor.
4. Submit your code to see the results.
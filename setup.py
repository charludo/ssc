import pathlib
import setuptools

# The directory containing this file
HERE = pathlib.Path(__file__).parent

# The text of the README file
README = (HERE / "README.md").read_text()

setuptools.setup(name='ssc-compiler',
                 version="1.0.0",

                 description='Describe generalized Sudokus through simple equations. Compile programs to SAT and solve them with limboole.',
                 long_description=README,
                 long_description_content_type="text/markdown",
                 keywords=['sudoku', 'sat', 'compiler', 'limboole'],
                 url='https://github.com/charludo/ssc',
                 author='Charlotte Hartmann Paludo',
                 author_email='charlotte.hartmann-paludo@stud.uni-due.de',
                 packages=setuptools.find_packages(),
                 include_package_data=True,
                 zip_safe=False,

                 entry_points={"console_scripts": ["ssc = src.ssc:run"]},
                 install_requires=[
                    "lark>=1.0.0",
                    "click>=8.0.3",
                    "humanize>=3.13.0"
                 ]
                 )

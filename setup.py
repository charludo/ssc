import setuptools

setuptools.setup(name='ssc',
                 packages=setuptools.find_packages(),
                 include_package_data=True,
                 entry_points={"console_scripts": ["ssc = src.ssc"]},
                 install_requires=[
                    "lark==1.0.0"
                 ]
                 )

from conans import ConanFile, CMake, tools
import os

class KhanwarsSimplifierConan(ConanFile):
    name = "khanwarsSimplifier"
    version = "0.1"
    license = "AGPLv3+"
    author = "João Pedro Abreu de Souza <jp_abreu@id.uff.br>"
    url = "<Package recipe repository url here, for issues about the package>"
    description = "<Description of KhanwarsSimplifier here>"
    topics = ("<Put some tag here>", "<here>", "<and here>")
    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake"
    requires = "qt/6.0.3"

    def config_options(self):
        pass

    def source(self):
        pass

    def build(self):
        cmake = CMake(self,"Ninja")
        cmake.configure()
        cmake.build()
        cmake.test()

    def package(self):
        pass

    def package_info(self):
        pass

// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "DyteiOSCore",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "DyteiOSCore",
            targets: ["DyteiOSCore"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(
                    name: "DyteiOSCore",
                    url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.0.3.zip",
                    checksum: "dd779c0ca84e41f6f416ff9f722d005b8f9c255490ef8f939c70dff87bf954a2"
                )
    ]
)

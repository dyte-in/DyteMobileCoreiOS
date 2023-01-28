// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "DyteMobileCoreiOS",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "DyteiOSCore",
            targets: ["DyteiOSCore"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ethand91/mediasoup-ios-client.git", from: "1.5.4"),
        .package(url: "https://github.com/dyte-in/DyteiOSSocketIO.git", from: "0.0.1"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(
                    name: "DyteiOSCore",
                    url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.1.4.zip",
                    checksum: "dd779c0ca84e41f6f416ff9f722d005b8f9c255490ef8f939c70dff87bf954a2"
                )
    ]
)

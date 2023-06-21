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
//        .package(url: "https://github.com/dyte-in/DyteiOSSocketIO.git", from: "0.0.3"),
//        .package(url: "https://github.com/jitsi/webrtc.git", from: "111.0.2"),
//        .package(url: "https://github.com/daltoniam/Starscream", from: "4.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(
                    name: "DyteiOSCore",
                    url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.4.6.zip",
                    checksum: "90a9b575b7aee481378596c17885588865ece912c7b7d07368a2948dlbacObf"
                )
    ]
)

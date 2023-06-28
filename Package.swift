// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "DyteiOSCore",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "DyteiOSCore", targets: ["DyteiOSCoreTargets"]),
    ],
    dependencies: [
        .package(url: "https://github.com/dyte-in/DyteiOSSocketIO.git", branch: "main"),
        .package(name: "WebRTC", url: "https://github.com/jitsi/webrtc.git", branch: "master"),
    ],
    targets: [
        .binaryTarget(
            name: "DyteiOSCore",
            url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.5.2.zip",
            checksum: "2ddf6040ff832ed0c2b43d8971a15adb8c904b777557a581a29cd8da50ddc3c6"
        ),
        .target(
            name: "DyteiOSCoreTargets",
            dependencies: [
                .target(name: "DyteiOSCore"),
                .product(name: "WebRTC", package: "WebRTC"),
                .product(name: "DyteiOSSocketIO", package: "DyteiOSSocketIO"),
            ],
            path: "Sources/Wrapper"
        )
    ]
)

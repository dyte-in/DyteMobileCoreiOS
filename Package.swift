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
            url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.4.7.zip",
            checksum: "2d0b4777db3edd2036874e74b2e55e33b4adb73a2087c9609cc216124dd9892e"
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

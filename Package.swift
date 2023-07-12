// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "DyteiOSCore",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "DyteiOSCore", targets: ["DyteiOSCoreTargets"]),
    ],
    dependencies: [
        .package(url: "https://github.com/dyte-in/DyteiOSSocketIO.git", revision: "0.1.3"),
        .package(url: "https://github.com/jitsi/webrtc.git", from: "106.0.0")
    ],
    targets: [
        .binaryTarget(
            name: "DyteiOSCore",
            url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.5.8.zip",
            checksum: "98ae7326fb51c875c9671969967527f0574a031f4a7de39606c83e6f758ccfd9"
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


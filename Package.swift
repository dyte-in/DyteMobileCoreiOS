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
            url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.5.1.zip",
            checksum: "f8d280945015597e8a9e52b7b00a4a290ffdb773400425bc656c77ab68222bf0"
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

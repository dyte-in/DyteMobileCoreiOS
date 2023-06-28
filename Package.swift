// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "DyteiOSCore",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "DyteiOSCore", targets: ["DyteiOSCoreTargets"]),
    ],
    dependencies: [
        .package(url: "https://github.com/dyte-in/DyteiOSSocketIO.git", revision: "0.1.0"),
        .package(name: "WebRTC", url: "https://github.com/jitsi/webrtc.git", branch: "master"),
    ],
    targets: [
        .binaryTarget(
            name: "DyteiOSCore",
            url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.5.6.zip",
            checksum: "cf53571379503dfb19f4c6574717538a10fdabe4fc3d4f3a312f172f353a6f14"
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

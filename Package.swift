// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "DyteMobileCoreiOS",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "DyteiOSCore", targets: ["DyteiOSCore", "WebRTC", "DyteiOSSocketIO", "Starscream"]),
    ],
    targets: [
        .binaryTarget(
            name: "WebRTC",
            url: "https://github.com/webrtc-sdk/Specs/releases/download/114.5735.02/WebRTC.xcframework.zip",
            checksum: "c30668eac8f14a21cfb5612ca4e81b10e2d8d8d5e5231c00874ca118eff9a1c0"
        ),
        .binaryTarget(
            name: "DyteiOSCore",
            url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.8.0.zip",
            checksum: "c0fa2f2c4e203fc27a069980e2435e76a5b1a14356e47c37d79dc74dda70b2be"
        ),
        .binaryTarget(
            name: "DyteiOSSocketIO",
            url: "https://github.com/dyte-in/DyteiOSSocketIO/archive/refs/tags/0.1.6.zip",
            checksum: "ca0ffe1930f5d5f472abb4966b2b814489b463399fb7aa757b2ab8bd3570048e"
        ),
        .binaryTarget(
            name: "Starscream",
            url: "https://github.com/dyte-in/DyteStarscream/archive/refs/tags/0.0.3.zip",
            checksum: "8aa8a8078b74aa4dcb86bf27ce2b46ef51b5e5f731226cd30fbd83ac5d1e633f"
        )
    ]
)


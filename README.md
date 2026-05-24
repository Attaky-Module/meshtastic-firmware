<div align="center">

  <a href="https://attaky.com">
    <img alt="Attaky" src="./.github/attaky-logo-horizontal.png" width="32%" />
  </a>

  <h2>Meshtastic firmware for the Attaky Mesh series</h2>

  <p>
    <img src="https://img.shields.io/badge/board-ATK--MeshCombo--V1-C0252B?style=flat-square" alt="ATK-MeshCombo-V1" />
    <a href="./LICENSE"><img src="https://img.shields.io/badge/license-GPL_3.0-blue?style=flat-square" alt="License" /></a>
    <a href="https://discord.attaky.com"><img src="https://img.shields.io/badge/Discord-attaky-5865F2?style=flat-square&logo=discord&logoColor=white" alt="Discord" /></a>
  </p>

  <a href="https://attaky.com">Attaky home</a>
  &nbsp;·&nbsp;
  <a href="https://discord.attaky.com">Discord</a>

</div>

> This repository is a fork of [Meshtastic firmware](https://github.com/meshtastic/firmware),
> last modified by Attaky on **2026-01-16** from upstream **`v2.7.3.cf574c7`**,
> to add support for the **Attaky Mesh series** of off-grid LoRa devices.
> Inherits Meshtastic's **GPL-3.0** license.

## Attaky Mesh series

Off-grid LoRa mesh communication. The fork supports these Attaky bundles, which share the same underlying ATK-MeshCombo-V1 board:

- **Mesh Pocket 1.0**
- **Mesh Deck 1.0** *(flagship — pocket form with integrated keyboard)*
- **Mesh Station 1.0**

## What this fork adds on top of Meshtastic

- **ATK-MeshCombo-V1 board support** — board definition, variant, peripheral integration (320×240 TFT + touch + I2C keyboard)
- **Battery gauge init deferred until after i2c scan** — the gauge is an optional I2C module on the expansion bus, so init runs after the scanner has detected what's on the bus
- **Paired Attaky fork of `meshtastic-device-ui`** — the `lib_deps` for the `atk_meshcombo_v1_tft` env pulls [`Attaky-Module/meshtastic-device-ui`](https://github.com/Attaky-Module/meshtastic-device-ui), which carries Attaky's I2C keyboard driver. No manual file-overlay step needed.

Upstream Meshtastic features (protocol, mesh, encryption, etc.) are unchanged.

## Build & flash

1. Set up PlatformIO per the upstream [Meshtastic build docs](https://meshtastic.org/docs/development/firmware/build).
2. Choose environment — `atk_meshcombo_v1_tft` (with 320×240 TFT + touch + I2C keyboard) or `atk_meshcombo_v1` (headless).
3. `pio run -e atk_meshcombo_v1_tft -t upload`

## Support

- **Mesh series / this fork** — Attaky [Discord](https://discord.attaky.com)
- **Meshtastic protocol / upstream firmware** — file at [`meshtastic/firmware`](https://github.com/meshtastic/firmware/issues)

---

# ↓ Upstream Meshtastic README ↓

<div align="center" markdown="1">

<img src=".github/meshtastic_logo.png" alt="Meshtastic Logo" width="80"/>
<h1>Meshtastic Firmware</h1>

![GitHub release downloads](https://img.shields.io/github/downloads/meshtastic/firmware/total)
[![CI](https://img.shields.io/github/actions/workflow/status/meshtastic/firmware/main_matrix.yml?branch=master&label=actions&logo=github&color=yellow)](https://github.com/meshtastic/firmware/actions/workflows/ci.yml)
[![CLA assistant](https://cla-assistant.io/readme/badge/meshtastic/firmware)](https://cla-assistant.io/meshtastic/firmware)
[![Fiscal Contributors](https://opencollective.com/meshtastic/tiers/badge.svg?label=Fiscal%20Contributors&color=deeppink)](https://opencollective.com/meshtastic/)
[![Vercel](https://img.shields.io/static/v1?label=Powered%20by&message=Vercel&style=flat&logo=vercel&color=000000)](https://vercel.com?utm_source=meshtastic&utm_campaign=oss)

<a href="https://trendshift.io/repositories/5524" target="_blank"><img src="https://trendshift.io/api/badge/repositories/5524" alt="meshtastic%2Ffirmware | Trendshift" style="width: 250px; height: 55px;" width="250" height="55"/></a>

</div>

</div>

<div align="center">
	<a href="https://meshtastic.org">Website</a>
	-
	<a href="https://meshtastic.org/docs/">Documentation</a>
</div>

## Overview

This repository contains the official device firmware for Meshtastic, an open-source LoRa mesh networking project designed for long-range, low-power communication without relying on internet or cellular infrastructure. The firmware supports various hardware platforms, including ESP32, nRF52, RP2040/RP2350, and Linux-based devices.

Meshtastic enables text messaging, location sharing, and telemetry over a decentralized mesh network, making it ideal for outdoor adventures, emergency preparedness, and remote operations.

### Get Started

- 🔧 **[Building Instructions](https://meshtastic.org/docs/development/firmware/build)** – Learn how to compile the firmware from source.
- ⚡ **[Flashing Instructions](https://meshtastic.org/docs/getting-started/flashing-firmware/)** – Install or update the firmware on your device.

Join our community and help improve Meshtastic! 🚀

## Stats

![Alt](https://repobeats.axiom.co/api/embed/8025e56c482ec63541593cc5bd322c19d5c0bdcf.svg "Repobeats analytics image")



## 概要

本ライブラリは各環境のオーディオAPIを抽象化し、基本的な音の機能をサポートしつつ再生するライブラリである。

音の再生は、ほぼ必然的に2つのスレッドに分かれる。
その2つはユーザーが操作する関数を実行したり、ファイルを読み込むメインスレッドと、音の再生処理を行うスレッドである。

音の再生は、音のAPIに波形データを挿入することで行われる。再生していないデータ量が少なくなってきたらデータを追加する。
このとき、音の波形データの挿入が少しでも遅れるとノイズが発生するため、マルチスレッドで実行する必要がある。

メインスレッドでユーザーが操作する関数はManagerクラスが持っている。
各環境ごとのオーディオAPIはManagerクラスの継承により実装している。

読み込めるファイルの種類はWaveとoggである。これらの読み込みには、Decorderクラスを使用している。
ファイルフォーマットごとに継承されたDecorderクラスにより、音声ファイルをデコードして使用している。

PannerやResamplerクラスで音を加工している。ただし、これらのクラスはリファクタリングするべきである。

ちなみに、音は全て44100hzに変換した上で内部では使用されている。

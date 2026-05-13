# kv-store

A Redis-like distributed in-memory key-value store with vector search, written in C++23.

---

## TODO

- [ ] Protocol parser + command structs (`SET`, `GET`, `DEL`, `VSET`, `VSEARCH`)
- [ ] In-memory KV store with read-write lock (`std::shared_mutex`)
- [ ] Boost.Asio TCP server + session management wired to KV store
- [ ] Write-ahead log (WAL) + snapshotting + crash recovery on startup
- [ ] HNSW vector index (from scratch) + `VSET`/`VSEARCH` command handlers
- [ ] AVX2 SIMD cosine similarity optimization
- [ ] Raft consensus layer — leader election, log replication, partition tolerance
- [ ] Benchmarks (Google Benchmark + HdrHistogram), Prometheus metrics endpoint, Docker 3-node cluster

/*
 * =====================================================================================
 *
 *       Filename:  raft_service.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年09月28日 13时34分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  WangYao (fisherman), wangyao02@baidu.com
 *        Company:  Baidu, Inc
 *
 * =====================================================================================
 */
#ifndef PUBLIC_RAFT_RAFT_SERVICE_H
#define PUBLIC_RAFT_RAFT_SERVICE_H

namespace raft {

class RaftServiceImpl : public ::raft::protocol::RaftService {
public:
    RaftServiceImpl();
    virtual ~RaftServiceImpl();

    virtual void request_vote(::google::protobuf::RpcController* controller,
                              const ::raft::protocol::RequestVoteRequest* request,
                              ::raft::protocol::RequestVoteResponse* response,
                              ::google::protobuf::Closure* done);

    virtual void append_entries(::google::protobuf::RpcController* controller,
                                const ::raft::protocol::AppendEntriesRequest* request,
                                ::raft::protocol::AppendEntriesResponse* response,
                                ::google::protobuf::Closure* done);

    virtual void install_snapshot(::google::protobuf::RpcController* controller,
                                  const ::raft::protocol::InstallSnapshotRequest* request,
                                  ::raft::protocol::InstallSnapshotResponse* response,
                                  ::google::protobuf::Closure* done);
};

}

#endif //~PUBLIC_RAFT_RAFT_SERVICE_H
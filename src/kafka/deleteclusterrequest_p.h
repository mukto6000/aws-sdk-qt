// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERREQUEST_P_H
#define QTAWS_DELETECLUSTERREQUEST_P_H

#include "kafkarequest_p.h"
#include "deleteclusterrequest.h"

namespace QtAws {
namespace Kafka {

class DeleteClusterRequest;

class DeleteClusterRequestPrivate : public KafkaRequestPrivate {

public:
    DeleteClusterRequestPrivate(const KafkaRequest::Action action,
                                   DeleteClusterRequest * const q);
    DeleteClusterRequestPrivate(const DeleteClusterRequestPrivate &other,
                                   DeleteClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClusterRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif

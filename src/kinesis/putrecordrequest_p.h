// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDREQUEST_P_H
#define QTAWS_PUTRECORDREQUEST_P_H

#include "kinesisrequest_p.h"
#include "putrecordrequest.h"

namespace QtAws {
namespace Kinesis {

class PutRecordRequest;

class PutRecordRequestPrivate : public KinesisRequestPrivate {

public:
    PutRecordRequestPrivate(const KinesisRequest::Action action,
                                   PutRecordRequest * const q);
    PutRecordRequestPrivate(const PutRecordRequestPrivate &other,
                                   PutRecordRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRecordRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif

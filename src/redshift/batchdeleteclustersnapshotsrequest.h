// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETECLUSTERSNAPSHOTSREQUEST_H
#define QTAWS_BATCHDELETECLUSTERSNAPSHOTSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class BatchDeleteClusterSnapshotsRequestPrivate;

class QTAWSREDSHIFT_EXPORT BatchDeleteClusterSnapshotsRequest : public RedshiftRequest {

public:
    BatchDeleteClusterSnapshotsRequest(const BatchDeleteClusterSnapshotsRequest &other);
    BatchDeleteClusterSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteClusterSnapshotsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

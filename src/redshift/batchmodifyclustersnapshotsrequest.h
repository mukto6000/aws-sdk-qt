// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHMODIFYCLUSTERSNAPSHOTSREQUEST_H
#define QTAWS_BATCHMODIFYCLUSTERSNAPSHOTSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class BatchModifyClusterSnapshotsRequestPrivate;

class QTAWSREDSHIFT_EXPORT BatchModifyClusterSnapshotsRequest : public RedshiftRequest {

public:
    BatchModifyClusterSnapshotsRequest(const BatchModifyClusterSnapshotsRequest &other);
    BatchModifyClusterSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchModifyClusterSnapshotsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

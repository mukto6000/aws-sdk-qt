// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTMETADATAREQUEST_H
#define QTAWS_GETOBJECTMETADATAREQUEST_H

#include "backupstoragerequest.h"

namespace QtAws {
namespace BackupStorage {

class GetObjectMetadataRequestPrivate;

class QTAWSBACKUPSTORAGE_EXPORT GetObjectMetadataRequest : public BackupStorageRequest {

public:
    GetObjectMetadataRequest(const GetObjectMetadataRequest &other);
    GetObjectMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectMetadataRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif

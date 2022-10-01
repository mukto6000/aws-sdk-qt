// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETENTRIESREQUEST_H
#define QTAWS_LISTDATASETENTRIESREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class ListDatasetEntriesRequestPrivate;

class QTAWSREKOGNITION_EXPORT ListDatasetEntriesRequest : public RekognitionRequest {

public:
    ListDatasetEntriesRequest(const ListDatasetEntriesRequest &other);
    ListDatasetEntriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetEntriesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif

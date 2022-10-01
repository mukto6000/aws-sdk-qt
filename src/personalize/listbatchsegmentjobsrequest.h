// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHSEGMENTJOBSREQUEST_H
#define QTAWS_LISTBATCHSEGMENTJOBSREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class ListBatchSegmentJobsRequestPrivate;

class QTAWSPERSONALIZE_EXPORT ListBatchSegmentJobsRequest : public PersonalizeRequest {

public:
    ListBatchSegmentJobsRequest(const ListBatchSegmentJobsRequest &other);
    ListBatchSegmentJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBatchSegmentJobsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif

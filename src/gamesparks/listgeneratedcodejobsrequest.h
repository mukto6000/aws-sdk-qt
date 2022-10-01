// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGENERATEDCODEJOBSREQUEST_H
#define QTAWS_LISTGENERATEDCODEJOBSREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class ListGeneratedCodeJobsRequestPrivate;

class QTAWSGAMESPARKS_EXPORT ListGeneratedCodeJobsRequest : public GameSparksRequest {

public:
    ListGeneratedCodeJobsRequest(const ListGeneratedCodeJobsRequest &other);
    ListGeneratedCodeJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGeneratedCodeJobsRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif

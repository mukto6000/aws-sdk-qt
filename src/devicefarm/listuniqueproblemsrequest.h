// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUNIQUEPROBLEMSREQUEST_H
#define QTAWS_LISTUNIQUEPROBLEMSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListUniqueProblemsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListUniqueProblemsRequest : public DeviceFarmRequest {

public:
    ListUniqueProblemsRequest(const ListUniqueProblemsRequest &other);
    ListUniqueProblemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUniqueProblemsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

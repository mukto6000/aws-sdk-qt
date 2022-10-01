// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMSREQUEST_H
#define QTAWS_LISTSTREAMSREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class ListStreamsRequestPrivate;

class QTAWSIVS_EXPORT ListStreamsRequest : public IvsRequest {

public:
    ListStreamsRequest(const ListStreamsRequest &other);
    ListStreamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamsRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif

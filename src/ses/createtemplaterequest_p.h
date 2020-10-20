/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATETEMPLATEREQUEST_P_H
#define QTAWS_CREATETEMPLATEREQUEST_P_H

#include "sesrequest_p.h"
#include "createtemplaterequest.h"

namespace QtAws {
namespace SES {

class CreateTemplateRequest;

class QTAWS_EXPORT CreateTemplateRequestPrivate : public SesRequestPrivate {

public:
    CreateTemplateRequestPrivate(const SesRequest::Action action,
                                   CreateTemplateRequest * const q);
    CreateTemplateRequestPrivate(const CreateTemplateRequestPrivate &other,
                                   CreateTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTemplateRequest)

};

} // namespace SES
} // namespace QtAws

#endif
